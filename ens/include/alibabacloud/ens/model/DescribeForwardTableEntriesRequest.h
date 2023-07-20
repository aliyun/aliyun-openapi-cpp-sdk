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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEFORWARDTABLEENTRIESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEFORWARDTABLEENTRIESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeForwardTableEntriesRequest : public RpcServiceRequest {
public:
	DescribeForwardTableEntriesRequest();
	~DescribeForwardTableEntriesRequest();
	std::string getInternalIp() const;
	void setInternalIp(const std::string &internalIp);
	std::string getExternalIp() const;
	void setExternalIp(const std::string &externalIp);
	std::string getIpProtocol() const;
	void setIpProtocol(const std::string &ipProtocol);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	bool getShowDetail() const;
	void setShowDetail(bool showDetail);
	std::string getForwardEntryId() const;
	void setForwardEntryId(const std::string &forwardEntryId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getNatGatewayId() const;
	void setNatGatewayId(const std::string &natGatewayId);
	std::string getForwardEntryName() const;
	void setForwardEntryName(const std::string &forwardEntryName);

private:
	std::string internalIp_;
	std::string externalIp_;
	std::string ipProtocol_;
	int pageNumber_;
	bool showDetail_;
	std::string forwardEntryId_;
	int pageSize_;
	std::string natGatewayId_;
	std::string forwardEntryName_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEFORWARDTABLEENTRIESREQUEST_H_
