/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTAVAILABLEFILESYSTEMTYPESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTAVAILABLEFILESYSTEMTYPESRESULT_H_

#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>
#include <string>
#include <utility>
#include <vector>

namespace AlibabaCloud {
namespace EHPC {
namespace Model {
class ALIBABACLOUD_EHPC_EXPORT ListAvailableFileSystemTypesResult
    : public ServiceResult {
public:
  struct FileSystemTypes {
    std::string protocolType;
    std::string fileSystemType;
    bool available;
    std::vector<std::string> storageTypes;
  };

  ListAvailableFileSystemTypesResult();
  explicit ListAvailableFileSystemTypesResult(const std::string &payload);
  ~ListAvailableFileSystemTypesResult();
  std::vector<FileSystemTypes> getFileSystemTypeList() const;

protected:
  void parse(const std::string &payload);

private:
  std::vector<FileSystemTypes> fileSystemTypeList_;
};
} // namespace Model
} // namespace EHPC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTAVAILABLEFILESYSTEMTYPESRESULT_H_