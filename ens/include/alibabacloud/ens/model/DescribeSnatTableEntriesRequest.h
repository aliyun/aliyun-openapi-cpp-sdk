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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBESNATTABLEENTRIESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBESNATTABLEENTRIESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeSnatTableEntriesRequest : public RpcServiceRequest {
public:
	DescribeSnatTableEntriesRequest();
	~DescribeSnatTableEntriesRequest();
	std::string getSnatIp() const;
	void setSnatIp(const std::string &snatIp);
	std::string getSnatEntryId() const;
	void setSnatEntryId(const std::string &snatEntryId);
	std::vector<std::string> getSnatIps() const;
	void setSnatIps(const std::vector<std::string> &snatIps);
	std::string getSourceCIDR() const;
	void setSourceCIDR(const std::string &sourceCIDR);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	bool getShowDetail() const;
	void setShowDetail(bool showDetail);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNatGatewayId() const;
	void setNatGatewayId(const std::string &natGatewayId);
	std::string getSnatEntryName() const;
	void setSnatEntryName(const std::string &snatEntryName);

private:
	std::string snatIp_;
	std::string snatEntryId_;
	std::vector<std::string> snatIps_;
	std::string sourceCIDR_;
	int pageNumber_;
	bool showDetail_;
	int pageSize_;
	std::string natGatewayId_;
	std::string snatEntryName_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBESNATTABLEENTRIESREQUEST_H_
