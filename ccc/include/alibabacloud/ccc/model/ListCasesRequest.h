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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTCASESREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTCASESREQUEST_H_

#include <alibabacloud/ccc/CCCExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CCC {
namespace Model {
class ALIBABACLOUD_CCC_EXPORT ListCasesRequest : public RpcServiceRequest {
public:
	ListCasesRequest();
	~ListCasesRequest();
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getCampaignId() const;
	void setCampaignId(const std::string &campaignId);
	std::string getPhoneNumber() const;
	void setPhoneNumber(const std::string &phoneNumber);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::string getState() const;
	void setState(const std::string &state);
	long getPageNumber() const;
	void setPageNumber(long pageNumber);

private:
	std::string instanceId_;
	std::string campaignId_;
	std::string phoneNumber_;
	long pageSize_;
	std::string state_;
	long pageNumber_;
};
} // namespace Model
} // namespace CCC
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CCC_MODEL_LISTCASESREQUEST_H_
