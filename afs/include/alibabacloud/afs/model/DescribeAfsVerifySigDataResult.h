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

#ifndef ALIBABACLOUD_AFS_MODEL_DESCRIBEAFSVERIFYSIGDATARESULT_H_
#define ALIBABACLOUD_AFS_MODEL_DESCRIBEAFSVERIFYSIGDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/afs/AfsExport.h>

namespace AlibabaCloud
{
	namespace Afs
	{
		namespace Model
		{
			class ALIBABACLOUD_AFS_EXPORT DescribeAfsVerifySigDataResult : public ServiceResult
			{
			public:
				struct AfsNcVerifyData
				{
					long ncVerifyPass;
					long ncVerifyBlock;
					std::string time;
				};
				struct AfsNcSigData
				{
					std::string time;
					long ncSigPass;
					long ncSigBlock;
				};
				struct AfsIcSecVerifyData
				{
					long icSecBlock;
					long icSecPass;
					std::string time;
				};
				struct AfsIcVerifyData
				{
					long icBlockCnt;
					long icSecVerifyCnt;
					std::string time;
					long icSigCnt;
					long icVerifyCnt;
				};
				struct AfsNvcVerifyData
				{
					std::string time;
					long nvcVerifyCnt;
					long nvcSecVerifyCnt;
				};
				struct AfsNvcSecData
				{
					long nvcSecPass;
					std::string time;
					long nvcSecBlock;
				};
				struct AfsNvcCodeData
				{
					long nvcCode200;
					long nvcCode600;
					long nvcCode400;
					std::string time;
					long nvcCode800;
				};


				DescribeAfsVerifySigDataResult();
				explicit DescribeAfsVerifySigDataResult(const std::string &payload);
				~DescribeAfsVerifySigDataResult();
				std::vector<AfsNvcCodeData> getNvcCodeDatas()const;
				std::vector<AfsNvcSecData> getNvcSecDatas()const;
				std::vector<AfsIcVerifyData> getIcVerifyDatas()const;
				std::vector<AfsNcVerifyData> getNcVerifyDatas()const;
				std::vector<AfsIcSecVerifyData> getIcSecVerifyDatas()const;
				std::vector<AfsNvcVerifyData> getNvcVerifyDatas()const;
				std::vector<AfsNcSigData> getNcSigDatas()const;
				std::string getBizCode()const;
				bool getHasData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AfsNvcCodeData> nvcCodeDatas_;
				std::vector<AfsNvcSecData> nvcSecDatas_;
				std::vector<AfsIcVerifyData> icVerifyDatas_;
				std::vector<AfsNcVerifyData> ncVerifyDatas_;
				std::vector<AfsIcSecVerifyData> icSecVerifyDatas_;
				std::vector<AfsNvcVerifyData> nvcVerifyDatas_;
				std::vector<AfsNcSigData> ncSigDatas_;
				std::string bizCode_;
				bool hasData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AFS_MODEL_DESCRIBEAFSVERIFYSIGDATARESULT_H_