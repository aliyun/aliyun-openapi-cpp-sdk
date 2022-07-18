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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEFILEREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEFILEREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateFileRequest : public RpcServiceRequest {
public:
	CreateFileRequest();
	~CreateFileRequest();
	bool getOwnerAccessInheritable() const;
	void setOwnerAccessInheritable(bool ownerAccessInheritable);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getPath() const;
	void setPath(const std::string &path);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	std::string getOwner() const;
	void setOwner(const std::string &owner);

private:
	bool ownerAccessInheritable_;
	std::string type_;
	std::string path_;
	std::string fileSystemId_;
	std::string owner_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEFILEREQUEST_H_
