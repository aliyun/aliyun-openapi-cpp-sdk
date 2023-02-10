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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPSTRUCTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPSTRUCTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeGroupStructResult : public ServiceResult
			{
			public:


				DescribeGroupStructResult();
				explicit DescribeGroupStructResult(const std::string &payload);
				~DescribeGroupStructResult();
				std::string getGroupName()const;
				int getMachineNum()const;
				int getGroupLevel()const;
				std::vector<std::string> getGroups()const;
				int getGroupIndex()const;
				int getGroupFather()const;
				int getGroupFlag()const;
				long getGroupId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string groupName_;
				int machineNum_;
				int groupLevel_;
				std::vector<std::string> groups_;
				int groupIndex_;
				int groupFather_;
				int groupFlag_;
				long groupId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEGROUPSTRUCTRESULT_H_