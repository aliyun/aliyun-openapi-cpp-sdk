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

#ifndef ALIBABACLOUD_CAS_MODEL_LISTUSERCERTIFICATEORDERREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_LISTUSERCERTIFICATEORDERREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT ListUserCertificateOrderRequest : public RpcServiceRequest {
public:
	ListUserCertificateOrderRequest();
	~ListUserCertificateOrderRequest();
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getKeyword() const;
	void setKeyword(const std::string &keyword);
	long getShowSize() const;
	void setShowSize(long showSize);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::string getStatus() const;
	void setStatus(const std::string &status);
	std::string getOrderType() const;
	void setOrderType(const std::string &orderType);

private:
	std::string resourceGroupId_;
	std::string sourceIp_;
	std::string keyword_;
	long showSize_;
	long currentPage_;
	std::string status_;
	std::string orderType_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_LISTUSERCERTIFICATEORDERREQUEST_H_
