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

#ifndef ALIBABACLOUD_DTS_MODEL_SWITCHSYNCHRONIZATIONENDPOINTREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_SWITCHSYNCHRONIZATIONENDPOINTREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT SwitchSynchronizationEndpointRequest : public RpcServiceRequest {
public:
	SwitchSynchronizationEndpointRequest();
	~SwitchSynchronizationEndpointRequest();
	std::string getEndpointInstanceType() const;
	void setEndpointInstanceType(const std::string &endpointInstanceType);
	std::string getEndpointIP() const;
	void setEndpointIP(const std::string &endpointIP);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);
	std::string getSynchronizationJobId() const;
	void setSynchronizationJobId(const std::string &synchronizationJobId);
	std::string getEndpointType() const;
	void setEndpointType(const std::string &endpointType);
	std::string getEndpointPort() const;
	void setEndpointPort(const std::string &endpointPort);
	std::string getEndpointInstanceId() const;
	void setEndpointInstanceId(const std::string &endpointInstanceId);
	std::string getSynchronizationDirection() const;
	void setSynchronizationDirection(const std::string &synchronizationDirection);

private:
	std::string endpointInstanceType_;
	std::string endpointIP_;
	std::string ownerId_;
	std::string synchronizationJobId_;
	std::string endpointType_;
	std::string endpointPort_;
	std::string endpointInstanceId_;
	std::string synchronizationDirection_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_SWITCHSYNCHRONIZATIONENDPOINTREQUEST_H_
