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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETINSTANCESTATUSSTATISTICREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETINSTANCESTATUSSTATISTICREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetInstanceStatusStatisticRequest : public RpcServiceRequest {
public:
	GetInstanceStatusStatisticRequest();
	~GetInstanceStatusStatisticRequest();
	std::string getProjectEnv() const;
	void setProjectEnv(const std::string &projectEnv);
	std::string getSchedulerPeriod() const;
	void setSchedulerPeriod(const std::string &schedulerPeriod);
	std::string getDagType() const;
	void setDagType(const std::string &dagType);
	std::string getBizDate() const;
	void setBizDate(const std::string &bizDate);
	std::string getSchedulerType() const;
	void setSchedulerType(const std::string &schedulerType);
	long getProjectId() const;
	void setProjectId(long projectId);

private:
	std::string projectEnv_;
	std::string schedulerPeriod_;
	std::string dagType_;
	std::string bizDate_;
	std::string schedulerType_;
	long projectId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETINSTANCESTATUSSTATISTICREQUEST_H_
