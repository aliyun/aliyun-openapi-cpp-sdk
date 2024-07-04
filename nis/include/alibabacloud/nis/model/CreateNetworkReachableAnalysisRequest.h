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

#ifndef ALIBABACLOUD_NIS_MODEL_CREATENETWORKREACHABLEANALYSISREQUEST_H_
#define ALIBABACLOUD_NIS_MODEL_CREATENETWORKREACHABLEANALYSISREQUEST_H_

#include <alibabacloud/nis/NisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nis {
namespace Model {
class ALIBABACLOUD_NIS_EXPORT CreateNetworkReachableAnalysisRequest : public RpcServiceRequest {
public:
	struct SystemTag {
		std::string key;
		std::string value;
		std::string scope;
	};
	struct Tag {
		std::string key;
		std::string value;
	};
	CreateNetworkReachableAnalysisRequest();
	~CreateNetworkReachableAnalysisRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	bool getDryRun() const;
	void setDryRun(bool dryRun);
	std::string getClientToken() const;
	void setClientToken(const std::string &clientToken);
	std::vector<SystemTag> getSystemTag() const;
	void setSystemTag(const std::vector<SystemTag> &systemTag);
	std::string getNetworkPathId() const;
	void setNetworkPathId(const std::string &networkPathId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getAuditParam() const;
	void setAuditParam(const std::string &auditParam);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);

private:
	long resourceOwnerId_;
	bool dryRun_;
	std::string clientToken_;
	std::vector<SystemTag> systemTag_;
	std::string networkPathId_;
	std::string regionId_;
	std::string auditParam_;
	std::vector<Tag> tag_;
};
} // namespace Model
} // namespace Nis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NIS_MODEL_CREATENETWORKREACHABLEANALYSISREQUEST_H_
