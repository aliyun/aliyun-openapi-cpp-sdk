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

#ifndef ALIBABACLOUD_ECD_MODEL_MODIFYDISKSPECREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_MODIFYDISKSPECREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ModifyDiskSpecRequest : public RpcServiceRequest {
public:
	ModifyDiskSpecRequest();
	~ModifyDiskSpecRequest();
	std::string getRootDiskPerformanceLevel() const;
	void setRootDiskPerformanceLevel(const std::string &rootDiskPerformanceLevel);
	bool getAutoPay() const;
	void setAutoPay(bool autoPay);
	std::string getUserDiskPerformanceLevel() const;
	void setUserDiskPerformanceLevel(const std::string &userDiskPerformanceLevel);
	std::string getPromotionId() const;
	void setPromotionId(const std::string &promotionId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDesktopId() const;
	void setDesktopId(const std::string &desktopId);

private:
	std::string rootDiskPerformanceLevel_;
	bool autoPay_;
	std::string userDiskPerformanceLevel_;
	std::string promotionId_;
	std::string regionId_;
	std::string desktopId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_MODIFYDISKSPECREQUEST_H_
