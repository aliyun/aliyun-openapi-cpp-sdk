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

#ifndef ALIBABACLOUD_EAS_MODEL_DESCRIBEGROUPRESULT_H_
#define ALIBABACLOUD_EAS_MODEL_DESCRIBEGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT DescribeGroupResult : public ServiceResult
			{
			public:


				DescribeGroupResult();
				explicit DescribeGroupResult(const std::string &payload);
				~DescribeGroupResult();
				std::string getClusterId()const;
				std::string getAccessToken()const;
				std::string getCreateTime()const;
				std::string getUpdateTime()const;
				std::string getInternetEndpoint()const;
				std::string getQueueService()const;
				std::string getIntranetEndpoint()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string clusterId_;
				std::string accessToken_;
				std::string createTime_;
				std::string updateTime_;
				std::string internetEndpoint_;
				std::string queueService_;
				std::string intranetEndpoint_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_DESCRIBEGROUPRESULT_H_