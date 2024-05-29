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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEPORTCCATTACKTOPIPREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEPORTCCATTACKTOPIPREQUEST_H_

#include <alibabacloud/ddoscoo/DdoscooExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ddoscoo {
namespace Model {
class ALIBABACLOUD_DDOSCOO_EXPORT DescribePortCcAttackTopIPRequest : public RpcServiceRequest {
public:
	DescribePortCcAttackTopIPRequest();
	~DescribePortCcAttackTopIPRequest();
	long getStartTimestamp() const;
	void setStartTimestamp(long startTimestamp);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	long getLimit() const;
	void setLimit(long limit);
	std::string getIp() const;
	void setIp(const std::string &ip);
	std::string getPort() const;
	void setPort(const std::string &port);

private:
	long startTimestamp_;
	std::string sourceIp_;
	long limit_;
	std::string ip_;
	std::string port_;
};
} // namespace Model
} // namespace Ddoscoo
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEPORTCCATTACKTOPIPREQUEST_H_
