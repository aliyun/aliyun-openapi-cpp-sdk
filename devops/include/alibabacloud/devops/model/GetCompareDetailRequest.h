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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_GETCOMPAREDETAILREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_GETCOMPAREDETAILREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT GetCompareDetailRequest : public RoaServiceRequest {
public:
	GetCompareDetailRequest();
	~GetCompareDetailRequest();
	int getMaxDiffFile() const;
	void setMaxDiffFile(int maxDiffFile);
	bool getMergeBase() const;
	void setMergeBase(bool mergeBase);
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	int getMaxDiffByte() const;
	void setMaxDiffByte(int maxDiffByte);
	long getRepositoryId() const;
	void setRepositoryId(long repositoryId);
	std::string getFrom() const;
	void setFrom(const std::string &from);
	std::string getTo() const;
	void setTo(const std::string &to);

private:
	int maxDiffFile_;
	bool mergeBase_;
	std::string organizationId_;
	int maxDiffByte_;
	long repositoryId_;
	std::string from_;
	std::string to_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_GETCOMPAREDETAILREQUEST_H_
