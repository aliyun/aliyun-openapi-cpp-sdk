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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONMETAREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONMETAREQUEST_H_

#include <alibabacloud/dts/DtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dts {
namespace Model {
class ALIBABACLOUD_DTS_EXPORT DescribeSubscriptionMetaRequest : public RpcServiceRequest {
public:
	DescribeSubscriptionMetaRequest();
	~DescribeSubscriptionMetaRequest();
	std::string getSid() const;
	void setSid(const std::string &sid);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getSubMigrationJobIds() const;
	void setSubMigrationJobIds(const std::string &subMigrationJobIds);
	std::string getTopics() const;
	void setTopics(const std::string &topics);
	std::string getDtsInstanceId() const;
	void setDtsInstanceId(const std::string &dtsInstanceId);

private:
	std::string sid_;
	std::string regionId_;
	std::string subMigrationJobIds_;
	std::string topics_;
	std::string dtsInstanceId_;
};
} // namespace Model
} // namespace Dts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESUBSCRIPTIONMETAREQUEST_H_
