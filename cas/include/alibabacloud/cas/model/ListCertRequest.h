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

#ifndef ALIBABACLOUD_CAS_MODEL_LISTCERTREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_LISTCERTREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT ListCertRequest : public RpcServiceRequest {
public:
	ListCertRequest();
	~ListCertRequest();
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getWarehouseId() const;
	void setWarehouseId(long warehouseId);
	std::string getCertType() const;
	void setCertType(const std::string &certType);
	std::string getSourceType() const;
	void setSourceType(const std::string &sourceType);
	std::string getKeyWord() const;
	void setKeyWord(const std::string &keyWord);
	long getShowSize() const;
	void setShowSize(long showSize);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	std::string sourceIp_;
	long warehouseId_;
	std::string certType_;
	std::string sourceType_;
	std::string keyWord_;
	long showSize_;
	long currentPage_;
	std::string status_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_LISTCERTREQUEST_H_
