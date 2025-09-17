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

#ifndef ALIBABACLOUD_MARKETPLACEINTL_MODEL_PUSHMETERINGDATAREQUEST_H_
#define ALIBABACLOUD_MARKETPLACEINTL_MODEL_PUSHMETERINGDATAREQUEST_H_

#include <alibabacloud/marketplaceintl/MarketplaceIntlExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace MarketplaceIntl {
namespace Model {
class ALIBABACLOUD_MARKETPLACEINTL_EXPORT PushMeteringDataRequest : public RpcServiceRequest {
public:
	struct MeteringData {
		std::string meteringAssist;
		std::string pushOrderBizId;
		std::string instanceId;
		long endTime;
		long startTime;
		std::string meteringEntity;
	};
	PushMeteringDataRequest();
	~PushMeteringDataRequest();
	std::vector<MeteringData> getMeteringData() const;
	void setMeteringData(const std::vector<MeteringData> &meteringData);
	std::string getGmtCreate() const;
	void setGmtCreate(const std::string &gmtCreate);

private:
	std::vector<MeteringData> meteringData_;
	std::string gmtCreate_;
};
} // namespace Model
} // namespace MarketplaceIntl
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MARKETPLACEINTL_MODEL_PUSHMETERINGDATAREQUEST_H_
