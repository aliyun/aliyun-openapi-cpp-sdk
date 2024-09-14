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

#ifndef ALIBABACLOUD_ACCOUNTLABEL_MODEL_QUERYCUSTOMERLABELREQUEST_H_
#define ALIBABACLOUD_ACCOUNTLABEL_MODEL_QUERYCUSTOMERLABELREQUEST_H_

#include <alibabacloud/accountlabel/AccountLabelExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AccountLabel {
namespace Model {
class ALIBABACLOUD_ACCOUNTLABEL_EXPORT QueryCustomerLabelRequest : public RpcServiceRequest {
public:
	QueryCustomerLabelRequest();
	~QueryCustomerLabelRequest();
	std::string getLabelSeries() const;
	void setLabelSeries(const std::string &labelSeries);
	long getPK() const;
	void setPK(long pK);
	std::string getToken() const;
	void setToken(const std::string &token);
	bool getInstant() const;
	void setInstant(bool instant);

private:
	std::string labelSeries_;
	long pK_;
	std::string token_;
	bool instant_;
};
} // namespace Model
} // namespace AccountLabel
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ACCOUNTLABEL_MODEL_QUERYCUSTOMERLABELREQUEST_H_
