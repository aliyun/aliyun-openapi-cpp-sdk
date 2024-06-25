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

#ifndef ALIBABACLOUD_SCHEDULERX2_MODEL_GETOVERVIEWREQUEST_H_
#define ALIBABACLOUD_SCHEDULERX2_MODEL_GETOVERVIEWREQUEST_H_

#include <alibabacloud/schedulerx2/Schedulerx2Export.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Schedulerx2 {
namespace Model {
class ALIBABACLOUD_SCHEDULERX2_EXPORT GetOverviewRequest : public RpcServiceRequest {
public:
	GetOverviewRequest();
	~GetOverviewRequest();
	int getMetricType() const;
	void setMetricType(int metricType);
	std::string getNamespaceSource() const;
	void setNamespaceSource(const std::string &namespaceSource);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getGroupId() const;
	void setGroupId(const std::string &groupId);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getOperate() const;
	void setOperate(const std::string &operate);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);

private:
	int metricType_;
	std::string namespaceSource_;
	long startTime_;
	std::string regionId_;
	std::string groupId_;
	long endTime_;
	std::string operate_;
	std::string _namespace_;
};
} // namespace Model
} // namespace Schedulerx2
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SCHEDULERX2_MODEL_GETOVERVIEWREQUEST_H_
