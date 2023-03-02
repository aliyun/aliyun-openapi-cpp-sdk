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

#ifndef ALIBABACLOUD_LTL_MODEL_DESCRIBEMPCOSPHASEINFOREQUEST_H_
#define ALIBABACLOUD_LTL_MODEL_DESCRIBEMPCOSPHASEINFOREQUEST_H_

#include <alibabacloud/ltl/LtlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ltl {
namespace Model {
class ALIBABACLOUD_LTL_EXPORT DescribeMPCoSPhaseInfoRequest : public RpcServiceRequest {
public:
	DescribeMPCoSPhaseInfoRequest();
	~DescribeMPCoSPhaseInfoRequest();
	std::string getDataKey() const;
	void setDataKey(const std::string &dataKey);
	std::string getDataSeq() const;
	void setDataSeq(const std::string &dataSeq);
	std::string getPhaseId() const;
	void setPhaseId(const std::string &phaseId);
	std::string getPhaseGroupId() const;
	void setPhaseGroupId(const std::string &phaseGroupId);
	std::string getApiVersion() const;
	void setApiVersion(const std::string &apiVersion);
	std::string getBizChainId() const;
	void setBizChainId(const std::string &bizChainId);

private:
	std::string dataKey_;
	std::string dataSeq_;
	std::string phaseId_;
	std::string phaseGroupId_;
	std::string apiVersion_;
	std::string bizChainId_;
};
} // namespace Model
} // namespace Ltl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LTL_MODEL_DESCRIBEMPCOSPHASEINFOREQUEST_H_
