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

#ifndef ALIBABACLOUD_ECD_MODEL_CREATEANDBINDNASFILESYSTEMREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_CREATEANDBINDNASFILESYSTEMREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT CreateAndBindNasFileSystemRequest : public RpcServiceRequest {
public:
	CreateAndBindNasFileSystemRequest();
	~CreateAndBindNasFileSystemRequest();
	std::string getOfficeSiteId() const;
	void setOfficeSiteId(const std::string &officeSiteId);
	std::vector<std::string> getEndUserIds() const;
	void setEndUserIds(const std::vector<std::string> &endUserIds);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getStorageType() const;
	void setStorageType(const std::string &storageType);
	int getEncryptType() const;
	void setEncryptType(int encryptType);
	std::string getDesktopGroupId() const;
	void setDesktopGroupId(const std::string &desktopGroupId);
	std::string getFileSystemName() const;
	void setFileSystemName(const std::string &fileSystemName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string officeSiteId_;
	std::vector<std::string> endUserIds_;
	std::string description_;
	std::string storageType_;
	int encryptType_;
	std::string desktopGroupId_;
	std::string fileSystemName_;
	std::string regionId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_CREATEANDBINDNASFILESYSTEMREQUEST_H_
