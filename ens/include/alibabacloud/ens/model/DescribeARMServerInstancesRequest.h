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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBEARMSERVERINSTANCESREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBEARMSERVERINSTANCESREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT DescribeARMServerInstancesRequest : public RpcServiceRequest {
public:
	DescribeARMServerInstancesRequest();
	~DescribeARMServerInstancesRequest();
	std::vector<std::string> getAICSpecs() const;
	void setAICSpecs(const std::vector<std::string> &aICSpecs);
	std::string getOrderByParams() const;
	void setOrderByParams(const std::string &orderByParams);
	bool getDescribeAICInstances() const;
	void setDescribeAICInstances(bool describeAICInstances);
	std::vector<std::string> getServerIds() const;
	void setServerIds(const std::vector<std::string> &serverIds);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getMaxDate() const;
	void setMaxDate(const std::string &maxDate);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::vector<std::string> getStates() const;
	void setStates(const std::vector<std::string> &states);
	std::vector<std::string> getServerSpecs() const;
	void setServerSpecs(const std::vector<std::string> &serverSpecs);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::vector<std::string> getEnsRegionIds() const;
	void setEnsRegionIds(const std::vector<std::string> &ensRegionIds);
	std::string getMinDate() const;
	void setMinDate(const std::string &minDate);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);

private:
	std::vector<std::string> aICSpecs_;
	std::string orderByParams_;
	bool describeAICInstances_;
	std::vector<std::string> serverIds_;
	std::string name_;
	std::string maxDate_;
	int pageNumber_;
	std::vector<std::string> states_;
	std::vector<std::string> serverSpecs_;
	int pageSize_;
	std::vector<std::string> ensRegionIds_;
	std::string minDate_;
	std::string _namespace_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBEARMSERVERINSTANCESREQUEST_H_
