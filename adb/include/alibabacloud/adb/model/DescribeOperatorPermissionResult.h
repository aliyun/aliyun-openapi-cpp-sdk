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

#ifndef ALIBABACLOUD_ADB_MODEL_DESCRIBEOPERATORPERMISSIONRESULT_H_
#define ALIBABACLOUD_ADB_MODEL_DESCRIBEOPERATORPERMISSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/adb/AdbExport.h>

namespace AlibabaCloud
{
	namespace Adb
	{
		namespace Model
		{
			class ALIBABACLOUD_ADB_EXPORT DescribeOperatorPermissionResult : public ServiceResult
			{
			public:


				DescribeOperatorPermissionResult();
				explicit DescribeOperatorPermissionResult(const std::string &payload);
				~DescribeOperatorPermissionResult();
				std::string getCreatedTime()const;
				std::string getPrivileges()const;
				std::string getExpiredTime()const;
				std::string getDBClusterId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string createdTime_;
				std::string privileges_;
				std::string expiredTime_;
				std::string dBClusterId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ADB_MODEL_DESCRIBEOPERATORPERMISSIONRESULT_H_