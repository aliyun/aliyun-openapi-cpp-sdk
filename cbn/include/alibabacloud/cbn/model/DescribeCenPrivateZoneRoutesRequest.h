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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENPRIVATEZONEROUTESREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENPRIVATEZONEROUTESREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT DescribeCenPrivateZoneRoutesRequest : public RpcServiceRequest {
public:
	DescribeCenPrivateZoneRoutesRequest();
	~DescribeCenPrivateZoneRoutesRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::string getAccessRegionId() const;
	void setAccessRegionId(const std::string &accessRegionId);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getHostRegionId() const;
	void setHostRegionId(const std::string &hostRegionId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getVersion() const;
	void setVersion(const std::string &version);

private:
	long resourceOwnerId_;
	std::string cenId_;
	std::string accessRegionId_;
	int pageNumber_;
	int pageSize_;
	std::string hostRegionId_;
	std::string resourceOwnerAccount_;
	std::string version_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENPRIVATEZONEROUTESREQUEST_H_
