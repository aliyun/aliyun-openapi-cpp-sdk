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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_LISTUSERDRAWRECORDBYPKREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_LISTUSERDRAWRECORDBYPKREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT ListUserDrawRecordByPkRequest : public RoaServiceRequest {
public:
	ListUserDrawRecordByPkRequest();
	~ListUserDrawRecordByPkRequest();
	std::string getAliyunPk() const;
	void setAliyunPk(const std::string &aliyunPk);
	std::string getDrawGroup() const;
	void setDrawGroup(const std::string &drawGroup);
	std::string getDrawPoolName() const;
	void setDrawPoolName(const std::string &drawPoolName);

private:
	std::string aliyunPk_;
	std::string drawGroup_;
	std::string drawPoolName_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_LISTUSERDRAWRECORDBYPKREQUEST_H_
