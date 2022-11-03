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

#ifndef ALIBABACLOUD_CAS_MODEL_LISTCERTWAREHOUSEREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_LISTCERTWAREHOUSEREQUEST_H_

#include <alibabacloud/cas/CasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cas {
namespace Model {
class ALIBABACLOUD_CAS_EXPORT ListCertWarehouseRequest : public RpcServiceRequest {
public:
	ListCertWarehouseRequest();
	~ListCertWarehouseRequest();
	long getShowSize() const;
	void setShowSize(long showSize);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getName() const;
	void setName(const std::string &name);

private:
	long showSize_;
	long currentPage_;
	std::string type_;
	std::string instanceId_;
	std::string sourceIp_;
	std::string name_;
};
} // namespace Model
} // namespace Cas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CAS_MODEL_LISTCERTWAREHOUSEREQUEST_H_
