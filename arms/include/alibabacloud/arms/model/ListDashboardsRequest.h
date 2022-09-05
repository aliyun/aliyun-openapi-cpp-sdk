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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTDASHBOARDSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTDASHBOARDSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT ListDashboardsRequest : public RpcServiceRequest {
public:
	ListDashboardsRequest();
	~ListDashboardsRequest();
	std::string getDashboardName() const;
	void setDashboardName(const std::string &dashboardName);
	std::string getProduct() const;
	void setProduct(const std::string &product);
	bool getRecreateSwitch() const;
	void setRecreateSwitch(bool recreateSwitch);
	std::string getLanguage() const;
	void setLanguage(const std::string &language);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getClusterType() const;
	void setClusterType(const std::string &clusterType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string dashboardName_;
	std::string product_;
	bool recreateSwitch_;
	std::string language_;
	std::string clusterId_;
	std::string proxyUserId_;
	std::string title_;
	std::string clusterType_;
	std::string regionId_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTDASHBOARDSREQUEST_H_
