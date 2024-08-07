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

#ifndef ALIBABACLOUD_MARKET_MODEL_RESUMEPROJECTREQUEST_H_
#define ALIBABACLOUD_MARKET_MODEL_RESUMEPROJECTREQUEST_H_

#include <alibabacloud/market/MarketExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Market {
namespace Model {
class ALIBABACLOUD_MARKET_EXPORT ResumeProjectRequest : public RpcServiceRequest {
public:
	ResumeProjectRequest();
	~ResumeProjectRequest();
	std::string getRemark() const;
	void setRemark(const std::string &remark);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getNodeId() const;
	void setNodeId(long nodeId);

private:
	std::string remark_;
	std::string instanceId_;
	long nodeId_;
};
} // namespace Model
} // namespace Market
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MARKET_MODEL_RESUMEPROJECTREQUEST_H_
