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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERQUOTARESULT_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERQUOTARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnUserQuotaResult : public ServiceResult
			{
			public:


				DescribeDcdnUserQuotaResult();
				explicit DescribeDcdnUserQuotaResult(const std::string &payload);
				~DescribeDcdnUserQuotaResult();
				int getRefreshUrlQuota()const;
				int getBlockRemain()const;
				int getPreloadRemain()const;
				int getIgnoreParamsRemain()const;
				int getRefreshDirRemain()const;
				int getBlockQuota()const;
				int getRefreshDirQuota()const;
				int getDomainQuota()const;
				int getRefreshUrlRemain()const;
				int getIgnoreParamsQuota()const;
				int getPreloadQuota()const;

			protected:
				void parse(const std::string &payload);
			private:
				int refreshUrlQuota_;
				int blockRemain_;
				int preloadRemain_;
				int ignoreParamsRemain_;
				int refreshDirRemain_;
				int blockQuota_;
				int refreshDirQuota_;
				int domainQuota_;
				int refreshUrlRemain_;
				int ignoreParamsQuota_;
				int preloadQuota_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNUSERQUOTARESULT_H_