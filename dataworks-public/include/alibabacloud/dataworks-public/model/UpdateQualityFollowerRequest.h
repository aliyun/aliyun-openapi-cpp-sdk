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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEQUALITYFOLLOWERREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEQUALITYFOLLOWERREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateQualityFollowerRequest : public RpcServiceRequest {
public:
	UpdateQualityFollowerRequest();
	~UpdateQualityFollowerRequest();
	std::string getProjectName() const;
	void setProjectName(const std::string &projectName);
	std::string getFollower() const;
	void setFollower(const std::string &follower);
	long getFollowerId() const;
	void setFollowerId(long followerId);
	int getAlarmMode() const;
	void setAlarmMode(int alarmMode);
	long getProjectId() const;
	void setProjectId(long projectId);

private:
	std::string projectName_;
	std::string follower_;
	long followerId_;
	int alarmMode_;
	long projectId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATEQUALITYFOLLOWERREQUEST_H_
