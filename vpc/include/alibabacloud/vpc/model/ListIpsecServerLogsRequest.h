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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTIPSECSERVERLOGSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTIPSECSERVERLOGSREQUEST_H_

#include <alibabacloud/vpc/VpcExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vpc {
namespace Model {
class ALIBABACLOUD_VPC_EXPORT ListIpsecServerLogsRequest : public RpcServiceRequest {
public:
	ListIpsecServerLogsRequest();
	~ListIpsecServerLogsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCallerBid() const;
	void setCallerBid(const std::string &callerBid);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getMinutePeriod() const;
	void setMinutePeriod(int minutePeriod);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getFrom() const;
	void setFrom(int from);
	int getTo() const;
	void setTo(int to);
	std::string getIpsecServerId() const;
	void setIpsecServerId(const std::string &ipsecServerId);

private:
	long resourceOwnerId_;
	std::string callerBid_;
	int pageNumber_;
	int minutePeriod_;
	std::string regionId_;
	int pageSize_;
	int from_;
	int to_;
	std::string ipsecServerId_;
};
} // namespace Model
} // namespace Vpc
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VPC_MODEL_LISTIPSECSERVERLOGSREQUEST_H_
