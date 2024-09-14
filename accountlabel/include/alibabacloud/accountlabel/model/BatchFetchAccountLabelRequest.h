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

#ifndef ALIBABACLOUD_ACCOUNTLABEL_MODEL_BATCHFETCHACCOUNTLABELREQUEST_H_
#define ALIBABACLOUD_ACCOUNTLABEL_MODEL_BATCHFETCHACCOUNTLABELREQUEST_H_

#include <alibabacloud/accountlabel/AccountLabelExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AccountLabel {
namespace Model {
class ALIBABACLOUD_ACCOUNTLABEL_EXPORT BatchFetchAccountLabelRequest : public RpcServiceRequest {
public:
	BatchFetchAccountLabelRequest();
	~BatchFetchAccountLabelRequest();
	std::string getOrganization() const;
	void setOrganization(const std::string &organization);
	long getPk() const;
	void setPk(long pk);
	std::string getUserName() const;
	void setUserName(const std::string &userName);
	bool getInstant() const;
	void setInstant(bool instant);
	std::string getToken() const;
	void setToken(const std::string &token);
	std::vector<std::string> getLabelSeriesList() const;
	void setLabelSeriesList(const std::vector<std::string> &labelSeriesList);

private:
	std::string organization_;
	long pk_;
	std::string userName_;
	bool instant_;
	std::string token_;
	std::vector<std::string> labelSeriesList_;
};
} // namespace Model
} // namespace AccountLabel
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ACCOUNTLABEL_MODEL_BATCHFETCHACCOUNTLABELREQUEST_H_
