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

#ifndef ALIBABACLOUD_NAS_MODEL_CREATEFILESETREQUEST_H_
#define ALIBABACLOUD_NAS_MODEL_CREATEFILESETREQUEST_H_

#include <alibabacloud/nas/NASExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace NAS {
namespace Model {
class ALIBABACLOUD_NAS_EXPORT CreateFilesetRequest : public RpcServiceRequest {
public:
	struct Quota {
		long sizeLimit;
		long fileCountLimit;
	};
	CreateFilesetRequest();
	~CreateFilesetRequest();
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getDeletionProtection() const;
	void setDeletionProtection(bool deletionProtection);
	Quota getQuota() const;
	void setQuota(const Quota &quota);
	std::string getFileSystemId() const;
	void setFileSystemId(const std::string &fileSystemId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getFileSystemPath() const;
	void setFileSystemPath(const std::string &fileSystemPath);

private:
	std::string clientToken_;
	std::string description_;
	bool deletionProtection_;
	Quota quota_;
	std::string fileSystemId_;
	bool dryRun_;
	std::string fileSystemPath_;
};
} // namespace Model
} // namespace NAS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NAS_MODEL_CREATEFILESETREQUEST_H_
