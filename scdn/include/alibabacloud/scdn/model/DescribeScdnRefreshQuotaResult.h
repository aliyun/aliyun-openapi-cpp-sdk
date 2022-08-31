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

#ifndef ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNREFRESHQUOTARESULT_H_
#define ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNREFRESHQUOTARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/scdn/ScdnExport.h>

namespace AlibabaCloud
{
	namespace Scdn
	{
		namespace Model
		{
			class ALIBABACLOUD_SCDN_EXPORT DescribeScdnRefreshQuotaResult : public ServiceResult
			{
			public:


				DescribeScdnRefreshQuotaResult();
				explicit DescribeScdnRefreshQuotaResult(const std::string &payload);
				~DescribeScdnRefreshQuotaResult();
				std::string getUrlRemain()const;
				std::string getPreloadRemain()const;
				std::string getBlockRemain()const;
				std::string getBlockQuota()const;
				std::string getDirRemain()const;
				std::string getUrlQuota()const;
				std::string getDirQuota()const;
				std::string getPreloadQuota()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string urlRemain_;
				std::string preloadRemain_;
				std::string blockRemain_;
				std::string blockQuota_;
				std::string dirRemain_;
				std::string urlQuota_;
				std::string dirQuota_;
				std::string preloadQuota_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCDN_MODEL_DESCRIBESCDNREFRESHQUOTARESULT_H_