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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBESECONDARYPUBLICIPADDRESSESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBESECONDARYPUBLICIPADDRESSESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeSecondaryPublicIpAddressesRequest : public RpcServiceRequest {
public:
	DescribeSecondaryPublicIpAddressesRequest();
	~DescribeSecondaryPublicIpAddressesRequest();
	std::string getSecondaryPublicIpId() const;
	void setSecondaryPublicIpId(const std::string &secondaryPublicIpId);
	std::string getIsp() const;
	void setIsp(const std::string &isp);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSecondaryPublicIpAddress() const;
	void setSecondaryPublicIpAddress(const std::string &secondaryPublicIpAddress);

private:
	std::string secondaryPublicIpId_;
	std::string isp_;
	int pageNumber_;
	std::string ensRegionId_;
	int pageSize_;
	std::string secondaryPublicIpAddress_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBESECONDARYPUBLICIPADDRESSESREQUEST_H_
