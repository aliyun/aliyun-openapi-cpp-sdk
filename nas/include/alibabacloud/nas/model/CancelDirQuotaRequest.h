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

#ifndef ALIBABACLOUD_NAS_MODEL_CANCELDIRQUOTAREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CANCELDIRQUOTAREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CancelDirQuotaRequest : public RpcServiceRequest {
public:
	CancelDirQuotaRequest();
	~CancelDirQuotaRequest();
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getPath() const;
	void setPath(const std::string &path);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	std::string getUserType() const;
	void setUserType(const std::string &userType);

private:
	std::string userId_;
	std::string path_;
	std::string fileSystemId_;
	std::string userType_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CANCELDIRQUOTAREQUEST_H_
