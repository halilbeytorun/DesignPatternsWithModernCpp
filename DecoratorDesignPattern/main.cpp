#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class DataSource
{
public:
  virtual ~DataSource() = default;
  virtual void WriteData(const string& data) = 0;
  virtual void ReadData() = 0;
};

class FileDataSource : public DataSource
{
private:
  string file_name_;
public:
  FileDataSource(const string& file_name) : DataSource(), file_name_{file_name} {}
  void WriteData(const string& data) override
  {
    cout << "FileDataSource Written the data to the file. The data: " << data << "\n";
  }
  void ReadData() override
  {
    cout << "FileDataSource read the data from the file\n";
  }
};

class DataSourceDecorator : public DataSource
{
protected:
  DataSource& s_;
public:
  DataSourceDecorator(DataSource& s) : DataSource{}, s_{s} {}
  virtual ~DataSourceDecorator() = default;
};

class EncryptionDecorator : public DataSourceDecorator
{
public:
  EncryptionDecorator(DataSource& s) : DataSourceDecorator(s) {}
  void WriteData(const string& data) override
  {
    cout << "EncryptionDecorator encypts the data before calling other decorators or the object\n";
    s_.WriteData(data);
  }
  void ReadData() override
  {
    cout << "EncryptionDecorator decrpts the data before calling other decorators or the object\n";
    s_.ReadData();
  }
};


class CompressionDecorator : public DataSourceDecorator
{
public:
  CompressionDecorator(DataSource& s) : DataSourceDecorator(s) {}
  void WriteData(const string& data) override
  {
    cout << "CompressionDecorator compresses the data before calling other decorators or the object\n";
    s_.WriteData(data);
  }
  void ReadData() override
  {
    cout << "CompressionDecorator decomprasses the data before calling other decorators or the object\n";
    s_.ReadData();
  }
};



int main()
{
  FileDataSource file_data_source{"halil.text"};
  EncryptionDecorator encyption_decorator{file_data_source};
  CompressionDecorator compression_decorator{encyption_decorator};

  compression_decorator.WriteData("some data");
  compression_decorator.ReadData();

  return 0;
}
