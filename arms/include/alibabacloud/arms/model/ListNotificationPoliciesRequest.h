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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTNOTIFICATIONPOLICIESREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTNOTIFICATIONPOLICIESREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT ListNotificationPoliciesRequest : public RpcServiceRequest {
public:
	ListNotificationPoliciesRequest();
	~ListNotificationPoliciesRequest();
	bool getIsDetail() const;
	void setIsDetail(bool isDetail);
	bool getDirectedMode() const;
	void setDirectedMode(bool directedMode);
	long getSize() const;
	void setSize(long size);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getIds() const;
	void setIds(const std::string &ids);
	long getPage() const;
	void setPage(long page);

private:
	bool isDetail_;
	bool directedMode_;
	long size_;
	std::string regionId_;
	std::string name_;
	std::string ids_;
	long page_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTNOTIFICATIONPOLICIESREQUEST_H_
