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

#ifndef ALIBABACLOUD_NAS_MODEL_SETDIRQUOTAREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_SETDIRQUOTAREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT SetDirQuotaRequest : public RpcServiceRequest {
public:
	SetDirQuotaRequest();
	~SetDirQuotaRequest();
	std::string getQuotaType() const;
	void setQuotaType(const std::string &quotaType);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	long getFileCountLimit() const;
	void setFileCountLimit(long fileCountLimit);
	std::string getPath() const;
	void setPath(const std::string &path);
	long getSizeLimit() const;
	void setSizeLimit(long sizeLimit);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	std::string getUserType() const;
	void setUserType(const std::string &userType);

private:
	std::string quotaType_;
	std::string userId_;
	long fileCountLimit_;
	std::string path_;
	long sizeLimit_;
	std::string fileSystemId_;
	std::string userType_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_SETDIRQUOTAREQUEST_H_
