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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEEDGETRANSFERRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEEDGETRANSFERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveEdgeTransferResult : public ServiceResult
			{
			public:


				DescribeLiveEdgeTransferResult();
				explicit DescribeLiveEdgeTransferResult(const std::string &payload);
				~DescribeLiveEdgeTransferResult();
				std::string getStreamName()const;
				std::string getDomainName()const;
				std::string getTransferArgs()const;
				std::string getHttpDns()const;
				std::string getAppName()const;
				std::string getTargetDomainList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string streamName_;
				std::string domainName_;
				std::string transferArgs_;
				std::string httpDns_;
				std::string appName_;
				std::string targetDomainList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEEDGETRANSFERRESULT_H_