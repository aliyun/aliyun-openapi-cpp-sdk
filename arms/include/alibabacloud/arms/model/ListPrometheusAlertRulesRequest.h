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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTPROMETHEUSALERTRULESREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTPROMETHEUSALERTRULESREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT ListPrometheusAlertRulesRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	ListPrometheusAlertRulesRequest();
	~ListPrometheusAlertRulesRequest();
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getType() const;
	void setType(const std::string &type);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getMatchExpressions() const;
	void setMatchExpressions(const std::string &matchExpressions);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string clusterId_;
	std::string proxyUserId_;
	std::string type_;
	std::vector<Tags> tags_;
	std::string regionId_;
	std::string name_;
	std::string matchExpressions_;
	int status_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTPROMETHEUSALERTRULESREQUEST_H_
