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

#ifndef ALIBABACLOUD_VS_MODEL_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESULT_H_
#define ALIBABACLOUD_VS_MODEL_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT DescribeVsStreamsNotifyUrlConfigResult : public ServiceResult
			{
			public:
				struct LiveStreamsNotifyConfig
				{
					std::string domainName;
					std::string notifyUrl;
					std::string authKey;
					std::string authType;
				};


				DescribeVsStreamsNotifyUrlConfigResult();
				explicit DescribeVsStreamsNotifyUrlConfigResult(const std::string &payload);
				~DescribeVsStreamsNotifyUrlConfigResult();
				LiveStreamsNotifyConfig getLiveStreamsNotifyConfig()const;

			protected:
				void parse(const std::string &payload);
			private:
				LiveStreamsNotifyConfig liveStreamsNotifyConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_DESCRIBEVSSTREAMSNOTIFYURLCONFIGRESULT_H_