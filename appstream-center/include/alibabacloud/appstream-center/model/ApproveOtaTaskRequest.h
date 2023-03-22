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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_MODEL_APPROVEOTATASKREQUEST_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_MODEL_APPROVEOTATASKREQUEST_H_

#include <alibabacloud/appstream-center/Appstream_centerExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Appstream_center {
namespace Model {
class ALIBABACLOUD_APPSTREAM_CENTER_EXPORT ApproveOtaTaskRequest : public RpcServiceRequest {
public:
	ApproveOtaTaskRequest();
	~ApproveOtaTaskRequest();
	std::string getBizRegionId() const;
	void setBizRegionId(const std::string &bizRegionId);
	std::string getOtaType() const;
	void setOtaType(const std::string &otaType);
	std::string getStartTime() const;
	void setStartTime(const std::string &startTime);
	std::string getStopTime() const;
	void setStopTime(const std::string &stopTime);
	std::string getAppInstanceGroupId() const;
	void setAppInstanceGroupId(const std::string &appInstanceGroupId);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);

private:
	std::string bizRegionId_;
	std::string otaType_;
	std::string startTime_;
	std::string stopTime_;
	std::string appInstanceGroupId_;
	std::string taskId_;
};
} // namespace Model
} // namespace Appstream_center
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_APPSTREAM_CENTER_MODEL_APPROVEOTATASKREQUEST_H_
