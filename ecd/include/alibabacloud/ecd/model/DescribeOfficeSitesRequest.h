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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEOFFICESITESREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEOFFICESITESREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeOfficeSitesRequest : public RpcServiceRequest {
public:
	DescribeOfficeSitesRequest();
	~DescribeOfficeSitesRequest();
	std::vector<std::string> getOfficeSiteId() const;
	void setOfficeSiteId(const std::vector<std::string> &officeSiteId);
	std::string getVpcType() const;
	void setVpcType(const std::string &vpcType);
	bool getEnableInternetAccess() const;
	void setEnableInternetAccess(bool enableInternetAccess);
	bool getVpcNotNone() const;
	void setVpcNotNone(bool vpcNotNone);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getOfficeSiteType() const;
	void setOfficeSiteType(const std::string &officeSiteType);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	int getMaxResults() const;
	void setMaxResults(int maxResults);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::vector<std::string> officeSiteId_;
	std::string vpcType_;
	bool enableInternetAccess_;
	bool vpcNotNone_;
	std::string regionId_;
	std::string officeSiteType_;
	std::string nextToken_;
	int maxResults_;
	std::string status_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEOFFICESITESREQUEST_H_
