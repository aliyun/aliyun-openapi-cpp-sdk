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

#ifndef ALIBABACLOUD_DDOSBGP_MODEL_DELETESCHEDRULEONDEMANDREQUEST_H_
#define ALIBABACLOUD_DDOSBGP_MODEL_DELETESCHEDRULEONDEMANDREQUEST_H_

#include <alibabacloud/ddosbgp/DdosbgpExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddosbgp {
namespace Model {
class ALIBABACLOUD_DDOSBGP_EXPORT DeleteSchedruleOnDemandRequest : public RpcServiceRequest {
public:
	DeleteSchedruleOnDemandRequest();
	~DeleteSchedruleOnDemandRequest();
	std::string getRuleName() const;
	void setRuleName(const std::string &ruleName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string ruleName_;
	std::string instanceId_;
	std::string sourceIp_;
	std::string regionId_;
};
} // namespace Model
} // namespace Ddosbgp
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSBGP_MODEL_DELETESCHEDRULEONDEMANDREQUEST_H_
