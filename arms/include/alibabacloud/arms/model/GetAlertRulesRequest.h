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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETALERTRULESREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_GETALERTRULESREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT GetAlertRulesRequest : public RpcServiceRequest {
public:
	struct Tags {
		std::string value;
		std::string key;
	};
	GetAlertRulesRequest();
	~GetAlertRulesRequest();
	std::string getProductCode() const;
	void setProductCode(const std::string &productCode);
	std::string getAlertStatus() const;
	void setAlertStatus(const std::string &alertStatus);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	std::vector<Tags> getTags() const;
	void setTags(const std::vector<Tags> &tags);
	std::string getAlertNames() const;
	void setAlertNames(const std::string &alertNames);
	std::string getAlertType() const;
	void setAlertType(const std::string &alertType);
	long getSize() const;
	void setSize(long size);
	std::string getAlertIds() const;
	void setAlertIds(const std::string &alertIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	long getPage() const;
	void setPage(long page);
	bool getIsOr() const;
	void setIsOr(bool isOr);

private:
	std::string productCode_;
	std::string alertStatus_;
	std::string clusterId_;
	std::string proxyUserId_;
	std::vector<Tags> tags_;
	std::string alertNames_;
	std::string alertType_;
	long size_;
	std::string alertIds_;
	std::string regionId_;
	long page_;
	bool isOr_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_GETALERTRULESREQUEST_H_
