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

#ifndef ALIBABACLOUD_DDOSDIVERSION_MODEL_LISTINSTANCEREQUEST_H_
#define ALIBABACLOUD_DDOSDIVERSION_MODEL_LISTINSTANCEREQUEST_H_

#include <alibabacloud/ddosdiversion/DdosDiversionExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace DdosDiversion {
namespace Model {
class ALIBABACLOUD_DDOSDIVERSION_EXPORT ListInstanceRequest : public RpcServiceRequest {
public:
	ListInstanceRequest();
	~ListInstanceRequest();
	long getNum() const;
	void setNum(long num);
	std::string getSaleId() const;
	void setSaleId(const std::string &saleId);
	std::string getName() const;
	void setName(const std::string &name);
	long getPage() const;
	void setPage(long page);
	std::string getStatus() const;
	void setStatus(const std::string &status);

private:
	long num_;
	std::string saleId_;
	std::string name_;
	long page_;
	std::string status_;
};
} // namespace Model
} // namespace DdosDiversion
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSDIVERSION_MODEL_LISTINSTANCEREQUEST_H_
