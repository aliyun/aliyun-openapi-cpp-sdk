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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_CREATEROUTESTRATEGYREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_CREATEROUTESTRATEGYREQUEST_H_

#include <alibabacloud/schedulerx2/Schedulerx2Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Schedulerx2 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX2_EXPORT CreateRouteStrategyRequest : public RpcServiceRequest {
public:
	CreateRouteStrategyRequest();
	~CreateRouteStrategyRequest();
	int getType() const;
	void setType(int type);
	long getJobId() const;
	void setJobId(long jobId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	std::string getStrategyContent() const;
	void setStrategyContent(const std::string &strategyContent);
	std::string getName() const;
	void setName(const std::string &name);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);
	int getStatus() const;
	void setStatus(int status);

private:
	int type_;
	long jobId_;
	std::string regionId_;
	std::string groupId_;
	std::string strategyContent_;
	std::string name_;
	std::string _namespace_;
	int status_;
};
} // namespace Model
} // namespace Schedulerx2
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_CREATEROUTESTRATEGYREQUEST_H_
