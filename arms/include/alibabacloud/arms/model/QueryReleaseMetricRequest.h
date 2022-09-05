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

#ifndef ALIBABACLOUD_ARMS_MODEL_QUERYRELEASEMETRICREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_QUERYRELEASEMETRICREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT QueryReleaseMetricRequest : public RpcServiceRequest {
public:
	QueryReleaseMetricRequest();
	~QueryReleaseMetricRequest();
	std::string getChangeOrderId() const;
	void setChangeOrderId(const std::string &changeOrderId);
	std::string getMetricType() const;
	void setMetricType(const std::string &metricType);
	long getCreateTime() const;
	void setCreateTime(long createTime);
	std::string getPid() const;
	void setPid(const std::string &pid);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	long getReleaseEndTime() const;
	void setReleaseEndTime(long releaseEndTime);
	std::string getService() const;
	void setService(const std::string &service);
	long getReleaseStartTime() const;
	void setReleaseStartTime(long releaseStartTime);

private:
	std::string changeOrderId_;
	std::string metricType_;
	long createTime_;
	std::string pid_;
	std::string proxyUserId_;
	long releaseEndTime_;
	std::string service_;
	long releaseStartTime_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_QUERYRELEASEMETRICREQUEST_H_
