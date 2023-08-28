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

#ifndef ALIBABACLOUD_EFLO_MODEL_CREATEERROUTEMAPREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_CREATEERROUTEMAPREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT CreateErRouteMapRequest : public RpcServiceRequest {
public:
	CreateErRouteMapRequest();
	~CreateErRouteMapRequest();
	std::string getReceptionInstanceType() const;
	void setReceptionInstanceType(const std::string &receptionInstanceType);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getReceptionInstanceId() const;
	void setReceptionInstanceId(const std::string &receptionInstanceId);
	std::string getRouteMapAction() const;
	void setRouteMapAction(const std::string &routeMapAction);
	std::string getTransmissionInstanceType() const;
	void setTransmissionInstanceType(const std::string &transmissionInstanceType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDestinationCidrBlock() const;
	void setDestinationCidrBlock(const std::string &destinationCidrBlock);
	std::string getErId() const;
	void setErId(const std::string &erId);
	int getRouteMapNum() const;
	void setRouteMapNum(int routeMapNum);
	std::string getReceptionInstanceOwner() const;
	void setReceptionInstanceOwner(const std::string &receptionInstanceOwner);
	std::string getTransmissionInstanceOwner() const;
	void setTransmissionInstanceOwner(const std::string &transmissionInstanceOwner);
	std::string getTransmissionInstanceId() const;
	void setTransmissionInstanceId(const std::string &transmissionInstanceId);

private:
	std::string receptionInstanceType_;
	std::string description_;
	std::string receptionInstanceId_;
	std::string routeMapAction_;
	std::string transmissionInstanceType_;
	std::string regionId_;
	std::string destinationCidrBlock_;
	std::string erId_;
	int routeMapNum_;
	std::string receptionInstanceOwner_;
	std::string transmissionInstanceOwner_;
	std::string transmissionInstanceId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_CREATEERROUTEMAPREQUEST_H_
