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

#ifndef ALIBABACLOUD_EFLO_MODEL_LISTERROUTEMAPSREQUEST_H_
#define ALIBABACLOUD_EFLO_MODEL_LISTERROUTEMAPSREQUEST_H_

#include <alibabacloud/eflo/EfloExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Eflo {
namespace Model {
class ALIBABACLOUD_EFLO_EXPORT ListErRouteMapsRequest : public RpcServiceRequest {
public:
	ListErRouteMapsRequest();
	~ListErRouteMapsRequest();
	std::string getReceptionInstanceType() const;
	void setReceptionInstanceType(const std::string &receptionInstanceType);
	std::string getReceptionInstanceId() const;
	void setReceptionInstanceId(const std::string &receptionInstanceId);
	int getErRouteMapNum() const;
	void setErRouteMapNum(int erRouteMapNum);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getRouteMapAction() const;
	void setRouteMapAction(const std::string &routeMapAction);
	std::string getTransmissionInstanceType() const;
	void setTransmissionInstanceType(const std::string &transmissionInstanceType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getTransmissionInstanceName() const;
	void setTransmissionInstanceName(const std::string &transmissionInstanceName);
	std::string getDestinationCidrBlock() const;
	void setDestinationCidrBlock(const std::string &destinationCidrBlock);
	std::string getErId() const;
	void setErId(const std::string &erId);
	std::string getErRouteMapId() const;
	void setErRouteMapId(const std::string &erRouteMapId);
	std::string getReceptionInstanceName() const;
	void setReceptionInstanceName(const std::string &receptionInstanceName);
	bool getEnablePage() const;
	void setEnablePage(bool enablePage);
	std::string getTransmissionInstanceId() const;
	void setTransmissionInstanceId(const std::string &transmissionInstanceId);

private:
	std::string receptionInstanceType_;
	std::string receptionInstanceId_;
	int erRouteMapNum_;
	int pageNumber_;
	std::string resourceGroupId_;
	std::string routeMapAction_;
	std::string transmissionInstanceType_;
	std::string regionId_;
	int pageSize_;
	std::string transmissionInstanceName_;
	std::string destinationCidrBlock_;
	std::string erId_;
	std::string erRouteMapId_;
	std::string receptionInstanceName_;
	bool enablePage_;
	std::string transmissionInstanceId_;
};
} // namespace Model
} // namespace Eflo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_EFLO_MODEL_LISTERROUTEMAPSREQUEST_H_
