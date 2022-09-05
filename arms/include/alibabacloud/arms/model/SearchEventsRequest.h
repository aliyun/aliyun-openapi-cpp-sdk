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

#ifndef ALIBABACLOUD_ARMS_MODEL_SEARCHEVENTSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_SEARCHEVENTSREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT SearchEventsRequest : public RpcServiceRequest {
public:
	SearchEventsRequest();
	~SearchEventsRequest();
	int getIsTrigger() const;
	void setIsTrigger(int isTrigger);
	std::string getAppType() const;
	void setAppType(const std::string &appType);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getPid() const;
	void setPid(const std::string &pid);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getProxyUserId() const;
	void setProxyUserId(const std::string &proxyUserId);
	int getAlertType() const;
	void setAlertType(int alertType);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getAlertId() const;
	void setAlertId(long alertId);

private:
	int isTrigger_;
	std::string appType_;
	long endTime_;
	std::string pid_;
	int currentPage_;
	long startTime_;
	std::string proxyUserId_;
	int alertType_;
	std::string regionId_;
	int pageSize_;
	long alertId_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_SEARCHEVENTSREQUEST_H_
