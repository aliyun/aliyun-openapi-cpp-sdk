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

#ifndef ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEAPPDETAILRESULT_H_
#define ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEAPPDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/retailcloud/RetailcloudExport.h>

namespace AlibabaCloud
{
	namespace Retailcloud
	{
		namespace Model
		{
			class ALIBABACLOUD_RETAILCLOUD_EXPORT DescribeAppDetailResult : public ServiceResult
			{
			public:
				struct Result
				{
					struct UserRole
					{
						std::string roleName;
						std::string userId;
						std::string realName;
						std::string userType;
					};
					struct MiddleWareInfo
					{
						long appId;
						int code;
						std::string name;
					};
					std::string operatingSystem;
					std::string deployType;
					std::vector<MiddleWareInfo> middleWareInfoList;
					std::string appStateType;
					std::string description;
					long appId;
					std::string language;
					std::string serviceType;
					std::vector<UserRole> userRoles;
					std::string bizTitle;
					std::string title;
					std::string bizName;
				};


				DescribeAppDetailResult();
				explicit DescribeAppDetailResult(const std::string &payload);
				~DescribeAppDetailResult();
				std::string getErrMessage()const;
				long getCode()const;
				Result getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errMessage_;
				long code_;
				Result result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RETAILCLOUD_MODEL_DESCRIBEAPPDETAILRESULT_H_