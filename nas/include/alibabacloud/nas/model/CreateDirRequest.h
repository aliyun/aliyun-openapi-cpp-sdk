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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEDIRREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEDIRREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateDirRequest : public RpcServiceRequest {
public:
	CreateDirRequest();
	~CreateDirRequest();
	bool getRecursion() const;
	void setRecursion(bool recursion);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	int getOwnerGroupId() const;
	void setOwnerGroupId(int ownerGroupId);
	int getOwnerUserId() const;
	void setOwnerUserId(int ownerUserId);
	std::string getPermission() const;
	void setPermission(const std::string &permission);
	std::string getRootDirectory() const;
	void setRootDirectory(const std::string &rootDirectory);

private:
	bool recursion_;
	std::string fileSystemId_;
	int ownerGroupId_;
	int ownerUserId_;
	std::string permission_;
	std::string rootDirectory_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEDIRREQUEST_H_
